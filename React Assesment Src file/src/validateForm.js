const validateForm = (values) => {
    let errors = {};
  
    // Username validation: Must be <= 4 characters
    if (!values.username) {
      errors.username = 'Username is required';
    } else if (values.username.length > 4) {
      errors.username = 'Username must be 4 characters or less';
    }
  
    // Email validation: Must match email pattern
    if (!values.email) {
      errors.email = 'Email is required';
    } else if (!/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/.test(values.email)) {
      errors.email = 'Invalid email format';
    }
  
    // Password validation: Must be at least 6 characters
    if (!values.password) {
      errors.password = 'Password is required';
    } else if (values.password.length < 6) {
      errors.password = 'Password must be at least 6 characters';
    }
  
    // Retype Password validation: Must match password
    if (!values.retypePassword) {
      errors.retypePassword = 'Please retype your password';
    } else if (values.password !== values.retypePassword) {
      errors.retypePassword = 'Passwords do not match';
    }
  
    // Phone Number validation: Must be 10 digits
    if (!values.phone) {
      errors.phone = 'Phone number is required';
    } else if (!/^\d{10}$/.test(values.phone)) {
      errors.phone = 'Phone number must be 10 digits';
    }
  
    // Address validation: Cannot be empty
    if (!values.address) {
      errors.address = 'Address is required';
    }
  
    // Town validation: Cannot be empty
    if (!values.town) {
      errors.town = 'Town is required';
    }
  
    // Zipcode validation: Must be 5 or 6 digits
    if (!values.zipcode) {
      errors.zipcode = 'Zipcode is required';
    } else if (!/^\d{5,6}$/.test(values.zipcode)) {
      errors.zipcode = 'Invalid zipcode';
    }
  
    // Country validation: Cannot be empty
    if (!values.country) {
      errors.country = 'Country is required';
    }
  
    return errors;
  };
  
  export default validateForm;
  